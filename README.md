## [Unreal Engine Navigation System](https://github.com/devinbroussard/unreal-engine-navigation-system/new/main?readme=1)

### What it is:
This is a project template made for Unreal Engine 4. It includes a built in in-game compass and the ability to add or remove customizable markers to said compass.

### How it works:
The system contains two components, the Navigation component and Waypoint Actor component. The Navigation component is responsible for adding, setting up, and holding a refernce to the Navigation widget. The Waypoint Actor component is responsible for creating a Waypoint Marker widget, and adding it to the Navigation widget.

The system also contains three widgets. The Navigation, Compass, and Compass Marker widgets. The Navigation widget is reponsible for handling and setting up each UI section (for now there is only a compass). It adds each widget to the screen, and assigns added waypoints to each of them. The compass widget is responsible for displaying the direction the player is facing relative to the world's forward vector, and adding, removing, and moving compass markers on the screen. Lastly, the compass marker widget is reponsible for storing a color and reference to it's assigned actor's location. This allows the Compass widget to determine where on the screen it needs to be.

### How to use:
To use, simply attach the given Navigation Component to the main character, and Waypoint Actor components to anything you want to have a marker on the compass. The Waypoint Actor component contains a waypoint color varaible that is customizable in the editor. The markers on the compass appear in whatever color and opacity you set it to.

### Plans:
Currently this system only has a built in in-game compass. But I plan to add a mini-map and waypoint markers in the future.
