void main(List<String> arguments) {
  User u = new User();
  u.getStatus();
  u.getIndexStatus();
  u.showStatus();
}

enum Status { ONLINE, OFFLINE }

class User {
  void getStatus() {
    print(Status.values); //Function to show all the enum values
    print(Status.OFFLINE);
  }

  void getIndexStatus() {
    print(Status.ONLINE.index);
  }

  void showStatus() {
    var taskStatus = Status.ONLINE;

    switch (taskStatus) {
      case Status.ONLINE:
        print('Status is online');
        break;

      case Status.OFFLINE:
        print('Status is offline');
        break;

      default:
        print('Status unknown');
        break;
    }
  }
}
