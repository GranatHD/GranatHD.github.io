class Calculator {
  constructor(previousOperandTextElement, currentOperandTextElement) {
    this.previousOperandTextElement = previousOperandTextElement
    this.currentOperandTextElement = currentOperandTextElement
    this.allclear()
  }

  allclear() {
    this.currentOperand = ''
    this.previousOperand = ''
    this.operation = undefined
  }

  clear(){
    this.currentOperand = this.currentOperand.toString().slice(0, -1)
  }

  appendNumber(number) {
    if (number === '.' && this.currentOperand.includes('.')) return
    this.currentOperand = this.currentOperand.toString() + number.toString()
  }

  chooseOperation(operation){
    if (this.currentOperand == '') return

    if (this.previousOperand !== ''){
      this.compute()
    }
    this.operation = operation
    this.previousOperand = this.currentOperand
    this.currentOperand = ''
  }

  compute(){
    let computation
    let cube
    const prev = parseFloat(this.previousOperand)
    const current = parseFloat(this.currentOperand)
    if (isNaN(prev) || isNaN(current)) return
    switch (this.operation) {
      case '+':
        computation = prev + current
        break
      case '-':
        computation = prev - current
        break
      case '*':
        computation = prev * current
        break
      case '/':
        computation = prev / current
        break
      case '%':
        computation = prev % current
        break
      case 'square':
        computation = prev * prev
        break
      case 'cube':
        computation = prev * prev * prev
        break
      case 'Cos':
        computation = Math.cos(prev)
        break
      case 'Sin':
        computation = Math.sin(prev)
        break
      case 'Tan':
        computation = Math.tan(prev)
        break
      case 'Pow':
        computation = Math.pow(prev, current)
        break
      case 'Ln':
        computation = Math.log(prev)
        break
      case 'Log':
        computation = Math.log10(prev)
        break
      case 'Cosh':
        computation = Math.cosh(prev)
        break
      case 'Sinh':
        computation = Math.sinh(prev)
        break
      case 'Tanh':
        computation = Math.tanh(prev)
        break
      case 'Acos':
        computation = Math.acos(prev)
        break
      case 'Asin':
        computation = Math.asin(prev)
        break
      case 'Atan':
        computation = Math.atan(prev)
        break
      case 'Atan2':
        computation = Math.atan2(prev)
        break

    }

    this.currentOperand = computation
    this.operation = undefined
    this.previousOperand = ''
  }

  getDisplayNumber(number){
    const stringNumber = number.toString()
    const integerDigits = parseFloat(stringNumber.split('.')[0])
    const decimalDigits = stringNumber.split('.')[1]
    let integerDisplay
    if (isNaN(integerDigits)){
      integerDisplay = ''
    } else {
      integerDisplay = integerDigits.toLocaleString('en', {
        maximumFractionDigits: 0})
    }
    if (decimalDigits != null){
      return `${integerDisplay}.${decimalDigits}`
    } else {
      return integerDisplay
    }
  }

  updateDisplay(){
    this.currentOperandTextElement.innerText =
     this.getDisplayNumber(this.currentOperand)
    if (this.operation != null){
    this.previousOperandTextElement.innerText =
    `${this.getDisplayNumber(this.previousOperand)} ${this.operation}`
    } else {
      this.previousOperandTextElement.innerText = ''
    }
  }
}



const numberButtons = document.querySelectorAll('[data-number]')
const operationButtons = document.querySelectorAll('[data-operation]')
const equalsButton = document.querySelector('[data-equals]')
const clearButton = document.querySelector('[data-clear]')
const allClearButton = document.querySelector('[data-all-clear]')
const previousOperandTextElement = document.querySelector('[data-previous-operand]')
const currentOperandTextElement = document.querySelector('[data-current-operand]')

const calculator = new Calculator(previousOperandTextElement, currentOperandTextElement)

numberButtons.forEach(button => {
  button.addEventListener('click', () => {
    calculator.appendNumber(button.innerText)
    calculator.updateDisplay()
  })
})

operationButtons.forEach(button => {
  button.addEventListener('click', () => {
    calculator.chooseOperation(button.innerText)
    calculator.updateDisplay()
  })
})

equalsButton.addEventListener('click', button=>{
  calculator.compute()
  calculator.updateDisplay()
})

allClearButton.addEventListener('click', button=>{
  calculator.allclear()
  calculator.updateDisplay()
})

clearButton.addEventListener('click', button=>{
  calculator.clear()
  calculator.updateDisplay()
})
