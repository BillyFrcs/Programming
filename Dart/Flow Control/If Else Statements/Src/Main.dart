import 'dart:io';

void main() {
  var userAge = 16; //Change value

  if (userAge <= 22) {
    print("You already adult");
  } else if (userAge >= 22) {
    print("You are pretty good adult");
  } else {
    print("You still young");
  }

  print('\n');
  // (||) Must have one true when run program with nor.
  // (&&) Must true all the condition when run program with and.

  int value = 90;

  if (value == 90 || value < 100) {
    print("First condition run");
  } else {
    print("Second condition run");
  }

  var playingPubg;
  var doingAssignments;

  //What's Billy gonna do today ?
  if (playingPubg == true || doingAssignments != false) {
    print("Playing Pubg");
  } else {
    print("Doing Assignments");
  }

  started();
}

void started() {
  stdout.write('Start game? (y/n): ');
  dynamic start = stdin.readLineSync();

  if (start == 'y') {
    print("Starting game...");
  } else if (start == 'n') {
    print("Closing game...");
  } else {
    print("Not found");
  }
}
