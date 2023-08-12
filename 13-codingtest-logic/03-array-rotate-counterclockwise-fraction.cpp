#include <bits/stdc++.h>
using namespace std;
vector<int> v;

/**
 * 만약 배열의 전체가 아니라 일부분만 회전시키고 싶다면?
 * 앞의 그림처럼 {1, 2, 3, 4, 5, 6} 중에서
 * {2, 3, 4, 5} 부분만 한칸씩 이동시켜서
 * {1, 2, 3, 4, 5, 6}을 {1, 3, 4, 5, 2, 6} 이렇게 만드는 것이죠
 *
 * 시작지점 v.begin() + 1,
 * 해당 부분으로부터 1칸이라면 시작지점으로부터 +1 을
 * 한 범위인 v.begin() + 2이렇게 하고
 * v.begin() + 1부터 시작해
 * v.begin() + 5까지 회전시킬 것이기 때문에 이렇게 넣어주면 됩니다.
 *
 * 다만 마지막 v.begin() + 5 처럼 1번 ~ 4번까지 회전한다고 했을 때
 * 마지막 지점은 포함되지 않는 끝점을 넣어줘야 하는 것을 주의해주세요
 */
int main() {
  vector<int> v = {1, 2, 3, 4, 5, 6};
  rotate(v.begin() + 1, v.begin() + 2, v.begin() + 5);
  for (int i : v)
    cout << i << ' '; // 1 3 4 5 2 6
}
