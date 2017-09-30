#include <iostream>
#include <algorithm>

// one layer (a set of Neurons)
class Neuron
{
  public:
    float w_, b_; // weight, bias

    Neuron()
        : w_(2.0), b_(1.0)
    {
    }

    // identity activation function
    float getActIdentity(const float &x)
    {
        return x;
    }
    // ReLU activation function
    float getActReLU(const float &x)
    {
        return std::max(0.0f, x);
    }
    float propForward(const float &x)
    {
        // affine sum
        const float sum = w_ * x + b_;

        // activation function
        return getActIdentity(sum);
    }
    float propForwardReLU(const float &x)
    {
        // affine sum
        const float sum = w_ * x + b_;

        // activation function
        return getActReLU(sum);
    }
};

int main()
{
    std::cout << "Hello, Neuron!\n"
              << std::endl;

    Neuron my_neuron;
    // Linear relation between input and output
    std::cout << "Linear forward prop" << std::endl;
    std::cout << my_neuron.propForward(-1.0) << std::endl;
    std::cout << my_neuron.propForward(-0.5) << std::endl;
    std::cout << my_neuron.propForward(0.0) << std::endl;
    std::cout << my_neuron.propForward(0.5) << std::endl;
    std::cout << my_neuron.propForward(1.0) << std::endl;
    std::cout << my_neuron.propForward(2.0) << std::endl;

    std::cout << "RelU forward prop" << std::endl;
    std::cout << my_neuron.propForwardReLU(-1.0) << std::endl;
    std::cout << my_neuron.propForwardReLU(-0.5) << std::endl;
    std::cout << my_neuron.propForwardReLU(0.0) << std::endl;
    std::cout << my_neuron.propForwardReLU(0.5) << std::endl;
    std::cout << my_neuron.propForwardReLU(1.0) << std::endl;
    std::cout << my_neuron.propForwardReLU(2.0) << std::endl;
    
    return 0;
}