class Character
{
     constructor(characterName, characterHealth, characterDamage)
     {
          this.characterName = characterName;
          this.characterHealth = characterHealth;
          this.characterDamage = characterDamage;
     }
}

class Wizard extends Character
{
     constructor(characterName, characterHealth, characterDamage)
     {
          super(characterName, characterHealth, characterDamage);
     }

     WizardAttack = () =>
     {
          console.log(this.characterName + ' has casting spell to the enemy with damage ' + this.characterDamage);
     }

     WizardGetHit = () =>
     {
          this.characterHealth -= 10;

          console.log(this.characterName + ' get hit by the enemy the health is reduced to ' + this.characterHealth);
     }
}

class Golem extends Character
{
     constructor(characterName, characterHealth, characterDamage)
     {
          super(characterName, characterHealth, characterDamage);
     }

     GolemAttack()
     {
          console.log(this.characterName + ' has punch to the enemy with damage ' + this.characterDamage);
     }

     GolemGetHit()
     {
          this.characterHealth -= 5;

          console.log(this.characterName + ' get hit by the enemy the health is reduced to ' + this.characterHealth);
     }
}

const wizard = new Wizard("Wizard Fire", 100, 20);
const golem = new Golem("Ice Golem", 200, 10);

wizard.WizardAttack();
golem.GolemGetHit();

golem.GolemAttack();
wizard.WizardGetHit();