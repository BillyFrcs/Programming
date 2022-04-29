class Developer
{
     constructor(firstName, lastName)
     {
          this.firstName = firstName;
          this.lastName = lastName;
     }
}

var developerData = function ()
{
     console.log(this.firstName + " " + this.lastName);
}

var dev = new Developer("Billy", "Franscois");

// Call
developerData.call(dev);

// Bind
const newDeveloperData = developerData.bind(dev);
newDeveloperData();

console.log();

var developerInfo = function (language1, language2, language3)
{
     console.log(`${this.firstName} ${this.lastName} knows ${language1}, ${language2}, and ${language3}`);
}

programmingLanguages = ['C++', '.NET C#', 'Java', 'JavaScript'];

developerInfo.call(dev, programmingLanguages[0], programmingLanguages[1], programmingLanguages[2]);

// Apply
developerData.apply(dev, programmingLanguages);

console.log();

let me = {
     name: "Sendy",
     getName: function ()
     {
          console.log(this.name);
     }
}

var getMyName = me.getName.bind(me);
getMyName();