
/**
 *  Copyright (c) 2014-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed as defined on the LICENSE file found in the
 *  root directory of this source tree.
 */

// Sanity check integration test for process_namespaces
// Spec file: specs/linux/process_namespaces.table

#include <osquery/tests/integration/tables/helper.h>

namespace osquery {
namespace table_tests {

class processNamespaces : public testing::Test {
 protected:
  void SetUp() override {
    setUpEnvironment();
  }
};

TEST_F(processNamespaces, test_sanity) {
  // 1. Query data
  auto const data = execute_query("select * from process_namespaces");
  // 2. Check size before validation
  // ASSERT_GE(data.size(), 0ul);
  // ASSERT_EQ(data.size(), 1ul);
  // ASSERT_EQ(data.size(), 0ul);
  // 3. Build validation map
  // See helper.h for avaialbe flags
  // Or use custom DataCheck object
  // ValidatatioMap row_map = {
  //      {"pid", IntType}
  //      {"cgroup_namespace", NormalType}
  //      {"ipc_namespace", NormalType}
  //      {"mnt_namespace", NormalType}
  //      {"net_namespace", NormalType}
  //      {"pid_namespace", NormalType}
  //      {"user_namespace", NormalType}
  //      {"uts_namespace", NormalType}
  //}
  // 4. Perform validation
  // validate_rows(data, row_map);
}

} // namespace table_tests
} // namespace osquery
