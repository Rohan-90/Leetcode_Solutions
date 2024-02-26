class ParkingSystem {
    int vec[3];
public:
  
    ParkingSystem(int big, int medium, int small) {
        vec[0] = big;
        vec[1] = medium;
        vec[2] = small;
    }
    
    bool addCar(int carType) {
        return vec[carType - 1] --> 0;
           
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */