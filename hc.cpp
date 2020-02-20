// get inc time order for signuo [ con: waste signup? || not really, if signed up before, other libs face the penalty]

// build set books to be scanned based on if book alrdy prsnt in prev lib

// cumulative sum of "max scannable" book scores for lib for each day

// pick lib from this heap

// ----
// send all books that havent been scanned ( dnt signup libs having clash )
// dec order of book score scanning per lib

#include <bits/stdc++.h>

int main() {

  // i/p only section
  int b, l, d;

  cin>>b>>l>>d;

  int scores[b];
  for(int i = 0; i < b; i++)
    cin>>scores[i];

  int lib_total_books[l];
  map<int, int> lib_signup_days[l];
  int lib_books_shipped_per_day[l];
  vector<vector<int>> lib_books_set;
  int signup_days;
  vector<int> this_lib_books;
  int book_num;

  for(int i = 0; i < l; i++) {

    cin>>lib_total_books[i]>>signup_days>>lib_books_shipped_per_day[i];
    
    for(int j = 0; j < lib_total_books[i]; j++) {
      cin>>book_num;
      this_lib_books.push_back(book_num);
    }
    lib_books_set.push_back(this_lib_books);
  }

  lib_signup_days.sort()

}
