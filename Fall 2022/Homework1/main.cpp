#include "Twitter.h"
#include <iostream>

struct Profile {
  std::string user_name;
  int age;
  std::string state;
};

std::ostream& operator << (std::ostream &output, Profile p) {
  output << p.user_name;
  return output;
}

bool operator == (const Profile &p1, const Profile p2) {
  return p1.user_name == p2.user_name;
}

int main() {
  //creating two accounts
  Twitter<std::string> t1("Chase");
  Twitter<Profile> t2("Jerry");

  std::cout << "Adding followers to Chase" << std::endl;
  t1.Add_Follower("Tim");
  t1.Add_Follower("Larry");
  t1.Print_Followers();

  //creating profiles
  Profile p1 = {"Lance", 64, "Florida"};
  Profile p2 = {"Perry", 32, "Michigan"};
  Profile p3 = {"Tim", 42, "Idaho"};
  Profile p4 = {"Terry", 20, "Michigan"};
  Profile p5 = {"Larry", 23, "Ohio"};
  Profile p6 = {"Dave", 54, "Washington"}; // <- This does not get added bc 5 follower limit

  std::cout << "Adding follower profiles to Jerry" << std::endl;
  t2.Add_Follower(p1);
  t2.Add_Follower(p2);
  t2.Add_Follower(p3);
  t2.Add_Follower(p4);
  t2.Add_Follower(p5);
  t2.Add_Follower(p6);// <- This does not get added bc 5 follower limit
  t2.Print_Followers();

  std::cout << "Removing Tim from Chase" << std::endl;
  t1.Remove_Follower("Tim");

  std::cout << "Removing Perry's profile from Jerry" << std::endl;
  t2.Remove_Follower(p2);
  t1.Print_Followers();
  t2.Print_Followers();
}

