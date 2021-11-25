# Test Plan

---

## High Level Test Plan

---

| TestID | Description                                                                                                                                  | Exp I/P | Exp O/P                       | Actual O/P                    | Type of Test      |
| ------ | -------------------------------------------------------------------------------------------------------------------------------------------- | ------- | ----------------------------- | ----------------------------- | ----------------- |
| H_01   | Adding name                                                                                                                                  | adnan   | adnan                        |                        | Requirement Based |
| H_02   | deleting an student detail                                                                                                      | ----    | SUCCESS                       | SUCCESS                       | Requirement Based |
| H_03   | When user enter option which is not listed                                                                                                   | ----    | Give message "Invalid option" | Give message "Invalid option" | Scenario Based    |
| H_04   | When no student detail to show                                                                                                               | ----    | Show no invoice message       | Show no invoice message       | Boundary based    |
| H_05   | Saving the student name into the file                                                                                      | ----    | SUCCESS                       | SUCCESS                       | Requirement Based |


## Low Level Test Plan

---

| TestID | Description                                                                                 | Exp I/P       | Exp O/P                  | Actual O/P               | Type of Test      |
| ------ | ------------------------------------------------------------------------------------------- | ------------- | ------------------------ | ------------------------ | ----------------- |
| L_01   | Search by UID           | UID       | Student name                    | student detail                 | Requirement Based |
| L_02   | Search by Department                          | Dept_name          | Student name                   | Student Detail                | Requirement Based |
| L_03   | Calculating Bill with 18% GST                                                               | 121.5         | 143.37                   | 143.37                   | Requirement Based |
| L_04   | Search Invoice, take customer name as input and return the invoice related to that customer | Customer Name | Customer Invoice         | Customer Invoice         | Requirement Based |
| L_05   | Search Invoice (Multiple Invoices of same Customer)                                         | Customer Name | All Invoices of Customer | All Invoices of Customer | Scenario Based    |
