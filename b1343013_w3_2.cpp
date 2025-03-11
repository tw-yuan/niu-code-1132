#include <bits/stdc++.h>
using namespace std;
int main() {
  int score[100], sum, stu, length = 0;
  while(true) {
    cout << "Score: ";
    cin >> stu;
    if (stu == -1) break;
    score[length] = stu;
    length++;
  }
  for (int i = 0; i < length; i++) {
    sum += score[i];
  }
  cout << "Average: " << sum / length << endl;
  cout << "Max:" << *max_element(score, score + length) << endl;
  cout << "Min:" << *min_element(score, score + length) << endl;
  return 0;
}