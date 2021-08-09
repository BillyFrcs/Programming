using System;

namespace Classes
{
     class Wizard
     {
          static public string nameWizard;
          public string spell;
          public int totalSpells;
          public float exp;

          public Wizard(string _nameWizard, string _spell, float _exp, int _totalSpells)
          {
               nameWizard = _nameWizard;
               spell = _spell;
               exp = _exp;
               totalSpells = _totalSpells;
          }

          public void Init()
          {
               Console.WriteLine("Wizard name: " + nameWizard);
          }

          public string SpellWizard()
          {
               return this.spell;
          }

          public void Update()
          {
               Console.WriteLine("Totall wizard spells: " + totalSpells);

               Console.WriteLine("Wizard using spell...");

               this.totalSpells--;
               Console.WriteLine("Total spell after using " + spell + ": " + this.totalSpells);

               Console.WriteLine("Wizard using " + totalSpells + " spell");
               if (this.totalSpells == 0)
               {
                    Console.WriteLine("Spell is empty! find new spell");
               }
               else
               {
                    Console.Write("\nCurrent spells " + this.totalSpells + " do you want to use one(y/n) ?");

                    string choose = Console.ReadLine();

                    if (choose == "y" || choose == "Y")
                    {
                         Console.WriteLine("You use " + this.totalSpells + " spell");
                    }
                    else if (choose == "n" || choose == "N")
                    {
                         Console.WriteLine("You don't use any spell, go back to gameplay...");
                    }
               }
          }

          public float AddNewExp(float _exp)
          {
               return exp += _exp;
          }
     }
     class Program
     {
          static void Main(string[] args)
          {
               // Animals object
               Animals animal = new Animals();
               animal.name = "Doggy";
               animal.type = "Dog";

               animal.DataAnimal();

               Wizard wizard = new Wizard("Ice Wizard", "Ice Storm", 10.0f, 2);

               wizard.Init();
               Console.WriteLine("Wizard spell: " + wizard.SpellWizard());

               Console.WriteLine("Wizard exp = " + wizard.exp);

               int attack = 0;

               while (attack < 5)
               {
                    Console.WriteLine("Wizard attack enemy....");
                    attack++;
               }

               Console.ReadLine();

               float exp = 20.0f;
               Console.WriteLine("Wizard get new exp after killed enemy = " + wizard.AddNewExp(exp));

               wizard.Update();
          }
     }

     class Animals
     {
          public string name;
          public string type;
          public void DataAnimal()
          {
               Console.WriteLine("Name animal: " + name);
               Console.WriteLine("Type animal: " + type);
          }
     }
}