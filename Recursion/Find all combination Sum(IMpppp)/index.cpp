

void print_all_sum_rec(
    int target,
    int current_sum,
    int start, vector<vector<int>>& output,
    vector<int>& result) {

  if (target == current_sum) {
    output.push_back(result);
  }

  for (int i = start; i < target; i++) {
    int temp_sum = current_sum + i;
    if (temp_sum <= target) {
      result.push_back(i);
      print_all_sum_rec(target, temp_sum, i, output, result);
      result.pop_back(); //backtracking...

    } else {
      return;
    }
  }
}

vector<vector<int>> print_all_sum(int target) {
  vector<vector<int>> output;
  vector<int> result;
  print_all_sum_rec(target, 0, 1, output, result);
  return output;
}


int main(int argc, const char* argv[]) {
  int n = 4;
  vector<vector<int>> result = print_all_sum(n);
  
  print (result);
}