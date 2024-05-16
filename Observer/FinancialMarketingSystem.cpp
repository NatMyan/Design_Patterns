#include <iostream>
#include <vector>
#include <string>

class MarketObserver {
    public:
        virtual void update(const std::string& stock, double price) = 0;
};

class MLModel : public MarketObserver {
    public:
        MLModel(const std::string& name) : modelName(name) {}

        void update(const std::string& stock, double price) override {
            std::cout << modelName << " received update for stock " << stock << ": $" << price << std::endl;
        }

    private:
        std::string modelName;
};

class MarketForecastSystem {
    public:
        void addObserver(MarketObserver* observer) {
            observers.push_back(observer);
        }

        void removeObserver(MarketObserver* observer) {
            observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());
        }

        void notifyObservers(const std::string& stock, double price) {
            for (auto observer : observers) {
                observer->update(stock, price);
            }
        }

        void simulateMarketChanges(double price) {
            if (price_ != price) {
                price_ = price;
                notifyObservers(stock_, price);
            }
        }

    private:
        std::vector<MarketObserver*> observers;
        double price_ = 100;
        std::string stock_ = "XYZ";
};

int main() {
    MarketForecastSystem marketSystem;

    MLModel model1("Model1");
    MLModel model2("Model2");
    MLModel model3("Model3");
    MLModel model4("Model4");

    marketSystem.addObserver(&model1);
    marketSystem.addObserver(&model2);
    marketSystem.addObserver(&model3);
    marketSystem.addObserver(&model4);

    marketSystem.simulateMarketChanges(200);

    marketSystem.removeObserver(&model3);
    std::cout << std::endl  << "After removing model3:" << std::endl;

    marketSystem.simulateMarketChanges(300);

    return 0;
}