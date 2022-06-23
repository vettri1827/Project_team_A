# M1_Application_Library_Management_System

|Build| Code Quality | Git Inspector |Unity  |
|-----|--------------|-------|---------------|
|[![Build-Linux](https://github.com/Mohanraj06/M1_Application_Library_Management_System/actions/workflows/build_linux.yml/badge.svg)](https://github.com/Mohanraj06/M1_Application_Library_Management_System/actions/workflows/build_linux.yml)[![Build-Windows](https://github.com/Mohanraj06/M1_Application_Library_Management_System/actions/workflows/build_windows.yml/badge.svg)](https://github.com/Mohanraj06/M1_Application_Library_Management_System/actions/workflows/build_windows.yml)|[![Codacy Badge](https://app.codacy.com/project/badge/Grade/dd9e9148782e4946aa39e438b02e41b5)](https://www.codacy.com/gh/Mohanraj06/M1_Application_Library_Management_System/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=Mohanraj06/M1_Application_Library_Management_System&amp;utm_campaign=Badge_Grade)![Code Grade](https://api.codiga.io/project/29969/status/svg)| [![Git Inspector](https://github.com/Mohanraj06/M1_Application_Library_Management_System/actions/workflows/git_inspector.yml/badge.svg)](https://github.com/Mohanraj06/M1_Application_Library_Management_System/actions/workflows/git_inspector.yml)|[![Unity](https://github.com/Mohanraj06/M1_Application_Library_Management_System/actions/workflows/unity.yml/badge.svg)](https://github.com/Mohanraj06/M1_Application_Library_Management_System/actions/workflows/unity.yml)|


















## Folder Structure
Folder             | Description
-------------------| -----------------------------------------
`1_Requirements`   | Documents detailing requirements and research
`2_Design`         | Documents specifying design details
`3_Implementation` | All code and documentation
`4_TestPlanAndOutput`      | Documents with test plans and procedures

## Contributors List and Summary

PS No. |  Name   |    Features    | Issuess Raised |Issues Resolved|No Test Cases|Test Case Pass
-------|---------|----------------|----------------|---------------|-------------|--------------
40020564 | Mohanraj D | F1,F2,F3,F4,f5,F6,F7,F8    |      |    | 10   |10 


Feature ID | Features
-----------|---------
 F1 | Added books details to file
 F2 | Delete book according to their Id
 F3 | Search Book according to their name
 F4 | Display Books
 F5 | Add days to issued date
 F6 | Update Credentials like username and password
 F7 | Check for valid name
 F8 | Check for valid date
 
The idea and logic was used from Library Management. I changed it to multifile programming, added error enum values to avoid confusion, added new feature to add 30 days to issued date so to know the return date and made the code comparatively easier to understand.  
 
## Challenges faced and How was it overcomed
| No. | Challenge | Solution|
|-----|-----------|---------|
| 1 |Writing test cases was difficult because the program usually takes user input | All the user input was stored in test_input.txt file and then run the test cases |
| 2 |Date issues was generated while calculating return date | It was solved using date addition algorithm |
| 3 |After Deleting the book no message for deletion status was shown | There was an error which was returning SUCCESS directly without printing the message, so I changed the return status after only displaying the message |
| 4 |Search result was not showing while search is completed | There was error generating automatically which the compiler couldn't find it. it was solved using gdb |


 
 
 
