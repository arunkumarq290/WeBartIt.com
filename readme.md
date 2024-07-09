/home/user/drone_project/
    ├── drone_ai.py
    ├── model.onnx
    └── labels.txt

# Install Dependencies
sudo apt-get update
sudo apt-get install python3-opencv
pip3 install numpy


# Clone the repository
git clone our repository

# Configure and build
mkdir build
cd build
cmake ..
make
sudo make install

# Navigate to the Project Directory
cd /home/user/drone_project
