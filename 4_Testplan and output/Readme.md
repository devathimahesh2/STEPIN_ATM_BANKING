# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       | withdraw                                                     |  choice  | success       | success          |Boundary based |
|  H_02       | Deposit                                                      | choice   | success       | success         |Boundary based    |
|  H_03       | Balance                                                      | choice   | success       | success          |Boundary based    |

## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |withdraw                                                     |  500,1000  |  500        |   500          |Boundary based |
|  L_02       |Deposit                                                       |  200,1000  | 1200        |  1200          |Boundary based    |
|  L_03       | Balance                                                      |  1000     | 1000        |  1000           |Boundary based    |