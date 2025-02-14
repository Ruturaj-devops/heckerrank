def can_host_celebration(budget, numGuests, foodCostPerGuest, decorationCost, musicCost, extraExpenses):
    totalFoodCost = foodCostPerGuest * numGuests
    totalCost = totalFoodCost + decorationCost + musicCost + extraExpenses

    if totalCost > budget:
        return "Celebration Denied"
    if numGuests <= 5 or numGuests > 50:
        return "Celebration Denied"
    if not (decorationCost < 0.3 * budget or totalFoodCost < 0.5 * budget):
        return "Celebration Denied"
    if numGuests > 25 and musicCost <= 0:
        return "Celebration Denied"

    return "Celebration Approved"

budget = int(input())
numGuests = int(input())
foodCostPerGuest = int(input())
decorationCost = int(input())
musicCost = int(input())
extraExpenses = int(input())

print(can_host_celebration(budget, numGuests, foodCostPerGuest, decorationCost, musicCost, extraExpenses))