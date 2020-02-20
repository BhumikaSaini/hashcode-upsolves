// get inc time order for signuo [ con: waste signup? || not really, if signed up before, other libs face the penalty] DONE

// build set books to be scanned based on if book alrdy prsnt in prev lib DONE

// HEAP: cumulative sum of "max scannable" book scores for lib for each day

// pick lib from this heap

// ----
// send all books that havent been scanned ( dnt signup libs having clash )
// dec order of book score scanning per lib

#include <bits/stdc++.h>

int main() {

  // i/p only section
  int b, l, d;

  cin>>b>>l>>d;

  bool is_book_scanned[b] = {false};

  int scores[b];
  for(int i = 0; i < b; i++)
    cin>>scores[i];

  int lib_total_books[l];
  map<int, int> lib_signup_days[l]; // #days => #lib
  int lib_books_shipped_per_day[l];
  vector<vector<int>> lib_books_set;
  vector<vector<int>> books_to_scan_set; //
  int signup_days;
  vector<int> this_lib_books;
  int book_num;

  for(int i = 0; i < l; i++) {

    cin>>lib_total_books[i]>>signup_days>>lib_books_shipped_per_day[i];
    lib_signup_days.insert(signup_days, i);

    for(int j = 0; j < lib_total_books[i]; j++) {
      cin>>book_num;
      this_lib_books.push_back(book_num);
    }
    lib_books_set.push_back(this_lib_books);
  }

  // decide which books are scanned already & build set of books to be scanned, for each lib
  for(int i = 0; i < l; i++) {
    this_lib_books = lib_books_set[i];
    vector<int> books_picked_this_lib;
    for(int j = 0; j < this_lib_books.size(); j++) {
      if (!is_book_scanned[this_lib_books[j]]) {
        is_book_scanned[this_lib_books[j]] = true;
        books_picked_this_lib.push_back(this_lib_books[j]);
      }
    }
    books_to_scan_set.push_back(books_picked_this_lib);
  }
}
