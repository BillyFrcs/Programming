let mobilePhone = {
     brand: 'Samsung',
     RAM: '8GB',
     CPU: 'Snapdragon'
}

console.log(mobilePhone.brand);
console.log(mobilePhone.RAM);
console.log(mobilePhone.CPU);

let computer = {
     brand: 'Asus',
     RAM: '16GB',
     Processor: 'Intel Core i9',

     getComputer()
     {
          return `${this.brand} ${this.RAM} ${this.Processor}`;
     },

     getComputerData()
     {
          console.log(`${this.brand} ${this.RAM} ${this.Processor}`)
     }
}

console.log(computer.getComputer());
computer.getComputerData();