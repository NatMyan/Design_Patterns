#include <iostream>

class House {
    public:
        void createWalls(bool walls) {
            walls_ = walls;
        }

        void createDoors(bool doors) {
            doors_ = doors;
        }

        void createPool(bool pool) {
            pool_ = pool;
        }

        void createRoof(bool roof) {
            roof_ = roof;
        }

        std::string house() {
            std::string self = "\n";
            self += "walls = " + getBoolVal(walls_) + "\n";
            self += "doors = " + getBoolVal(doors_) + "\n";
            self += "pool = " + getBoolVal(pool_) + "\n";
            self += "roof = " + getBoolVal(roof_) + "\n";
            return self;
        }

    private:
        std::string getBoolVal(bool val) {
            return val ? "true" : "false";
        }

    private:
        bool doors_;
        bool walls_;
        bool roof_;
        bool pool_;
};


class HouseBuilder {
    public:
        HouseBuilder() {
            house_ = new House();
        }

        ~HouseBuilder () {
            delete house_;
        }

    public:
        House* createWalls(bool walls) {
            house_->createWalls(true);
            std::cout << "House walls: " << house_->house() << std::endl;
            return house_;
        }

        House* createDoors(bool doors) {
            house_->createDoors(true);
            std::cout << "House doors: " << house_->house() << std::endl;
            return house_;
        }

        House* build() {
            return house_;
        }

    protected:
        House* house_;
};


class HouseWPoolBuilder : public HouseBuilder {
    public:
        House* createPool(bool pool){
            house_->createPool(true);
            std::cout << "House w/pool pool: " << house_->house() << std::endl;
            return house_;
        }

        House* build() {
            return house_;
        }
};


class NormalHouseBuilder : public HouseBuilder {
    public:
        House* createRoof(bool roof) {
            house_->createRoof(true);
            std::cout << "Normal house roof: " << house_->house() << std::endl;
            return house_;
        }

        House* build() {
            return house_;
        }
};


template<typename T>
class HouseDirector {
    public:
        HouseDirector(T& builder) : builder_(builder) {}

        void constructHouse() {
            builder_.createDoors(true)->createWalls(true); 

            if constexpr (std::is_same_v<T, NormalHouseBuilder>) {
                std::cout << std::boolalpha << std::is_same_v<T, NormalHouseBuilder> << std::endl;
                builder_.createRoof(true);
            }
        }

    private:
        T& builder_;
};


int main () {
    HouseBuilder builder;
    HouseDirector director(builder);
    director.constructHouse();

    NormalHouseBuilder builder2;
    HouseDirector director2(builder);
    director2.constructHouse();

    /*HouseBuilder builder;
    House* house = builder.createDoors(true).createWalls(true).build();*/
}


/*class HouseDirector {
    public:
        HouseDirector(HouseBuilder& builder) : builder_(builder) {}

        void constructHouse() {
            builder_.createDoors(true); //->createWalls(true); // only prints createDoors's 
            builder_.createWalls(true);
        }

    private:
        HouseBuilder& builder_;
};*/