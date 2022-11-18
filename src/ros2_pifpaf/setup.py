from setuptools import setup
import os
from glob import glob

package_name = 'ros2_pifpaf'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share',package_name), glob('launch/*.launch.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='root',
    maintainer_email='takap365best@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'check = ros2_pifpaf.check:main',
            'openpifpaf_ros2_node = ros2_pifpaf.openpifpaf_ros2_node:main',
            'rgbd_openpifpaf_ros2_node = ros2_pifpaf.rgbd_openpifpaf_ros2_node:main',
            'person_check = ros2_pifpaf.person_check:main',
        ],
    },
)
