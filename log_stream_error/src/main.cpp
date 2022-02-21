#include <sstream>

#include <rclcpp/rclcpp.hpp>

int main() {
    std::stringstream ss;
    ss << "hello world";
    RCLCPP_ERROR_STREAM(rclcpp::get_logger("test"), ss.str());
    return 0;
}
