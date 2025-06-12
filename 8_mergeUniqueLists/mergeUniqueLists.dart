List<int> mergeUniqueList(List<int> l1, List<int> l2) {
  return [
    ...{...l1, ...l2},
  ];
}

void main() {
  print(mergeUniqueList([10, 20, 30, 40], [2, 30, 40, 50, 50, 60]));
}
