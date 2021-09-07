# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       | withdraw                                                     |  500,1000  | 500         | 500            |Boundary based |
|  H_02       | withdraw                                                     | 400,1000   | 600         | 400            |Boundary based    |
|  H_03       | withdraw                                                     | 200,1000   | 800         | 800            |Boundary based    |

## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |Deposit                                                       |  500,1000  | 1500        |  1500          |Boundary based |
|  L_02       |Deposit                                                       |  200,1000  | 1200        |  1200          |Boundary based    |
|  L_03       |Deposit                                                       |  300,1000  | 1300        |  1300          |Boundary based    |