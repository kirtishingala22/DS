class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
     int totalGas = 0;
    int totalCost = 0;
    int currentGas = 0;
    int Index = 0;
    
    int n = gas.size();
    
    for (int i = 0; i < n; ++i) {
        totalGas += gas[i];
        totalCost += cost[i];
        currentGas += gas[i] - cost[i];
        
        if (currentGas < 0) {
            Index = i + 1;
            currentGas = 0;
        }
    }
    
    if (totalGas >= totalCost) {
        return Index;
    } else {
        return -1;
    }
    }
};