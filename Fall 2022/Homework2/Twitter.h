#ifndef Twitter_h
#define Twitter_h
#include <iostream>

template <typename T>
class Twitter {
  private:
  std::string name;
  T *followers;
  int num_followers;
  int capacity;
  public:
  Twitter(std::string n);
  void Add_Follower(T follower);
  bool Remove_Follower(T follower);
  void Print_Followers();
};

template <typename T>
Twitter<T>::Twitter(std::string n){
  capacity = 2;
  name = n;
  num_followers = 0;
  followers = new T[capacity];
}

template <typename T>
void Twitter<T>::Add_Follower(T follower) {
  T *temp;
  followers[num_followers++] = follower;
  if (num_followers >= capacity) {
    capacity += 10;
    temp = new T[capacity];
    for (int i = 0; i < num_followers; i++) {
      temp[i] = followers[i];
    }
    delete []followers;
    followers = temp;
    followers[num_followers] = follower;
  }
}
template <typename T>
bool Twitter<T>::Remove_Follower(T follower) {
  int i;
  bool found = false;
  for (i = 0; i < num_followers; i++) {
    if(followers[i] == follower) {
      found = true;
      break;
    }
  }
  if(found) {
    for(++i; i<num_followers; ++i) {
      followers[i-1] = followers[i];
    }
  num_followers--;
  return true;
  } else 
  return false;
}

template <typename T>
void Twitter<T>::Print_Followers(){
  std::cout << "---Followers for " << name << "---" <<std::endl;
  for(int i = 0; i < num_followers; i++){
    std::cout << followers[i] << std::endl;
  }
}

#endif