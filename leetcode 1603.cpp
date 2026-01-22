class ParkingSystem {
public:
    int s , m , b;
    ParkingSystem(int big, int medium, int small) {
        s = small;
        b = big;
        m = medium;
    }
    
    bool addCar(int cartype) {
        if(cartype == 1 && b > 0){
            b--;
            return true;
        }else if(cartype == 2 && m > 0){
            m--;
            return true;
        }else if(cartype == 3 && s > 0){
            s--;
            return true;
        }

        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
