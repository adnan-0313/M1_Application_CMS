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

| L_01| Search detail related to uid| uid | Student name         | Student Detail        | Requirement Based |
| L_02   | Search Multipe Student                                        | student department | student details  | All student detail| Scenario Based    |
