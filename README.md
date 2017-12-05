# Final Project
Final project for the CECS 2223-21 lab.

## Pharmacy Inventory
Design and develop a program to manage a pharmacy inventory. 

This pharmacy handles three types of medications: 
- over the counter medication
- prescribed regular medication
- prescribed controlled medication.

Each medication has a **price**, it is stored in a **bin** numbered by letters and its **name** contains: `name of medication`, `dosage` and `unit` of measure.

Example of a medication: *Children’s Aspirin 25 MG located at bin BR-CN with a cost of $0.50 each milligram.*

__Your program should:__
- Include a main menu that allows the user to: 
  - Enter a new pharmacy item.
  - Search for pharmacy items containing a specific name.
  - Print all medications on inventory.
  - Edit an inventory item.

- Upon printing all medications items, the user can decide if it wants the list to be exported to: 
  - A csv file (in which the user specifies the path).
  - A txt file (in which the user specifies the path). 
  - View on the console (print in console).

- All medication items have the date in which they were entered stored as part of their information.

- Upon searching the user must be able to select to search by:
  - Name. 
  - Bin. 
  - Entry date.

- Upon edit, the user can update the: 
  - Name.
  - Dosage and unit of the medication. 
  - Cost.

- By pressing this option the user can decide to cancel and not continue with the update or accept the changes.

- If the user accepts the changes the system will update the entry date to the new current date.

- The new location of bin must be updated.

- A medication can also be inactive. 
