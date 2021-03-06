/*******************************/
/* Configuration of the driver */
/*******************************/

/* Debug messages */
#define DEBUG

/* Enable/disable IRQ handling */
#define ENABLE_IRQ

/* The name of the module */
#define MODNAME "pciDriver"

/* Major number is allocated dynamically */
/* Minor number */
#define MINORNR 0

/* Node name of the char device */
#define NODENAME "fpga"
#define NODENAMEFMT "fpga%d"

/* Maximum number of devices. This is the default maximum
 * number of boards per microTCA.4 crate */
#define MAXDEVICES 12
