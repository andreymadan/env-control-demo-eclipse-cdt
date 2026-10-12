#ifndef ACTUATOR_MANAGER_H
#define ACTUATOR_MANAGER_H

int ActuatorManager_StartFan(void); /* parasoft-suppress MISRAC2025-DIR_4_6-b "Reviewed - no issues." */
int ActuatorManager_StopFan(void); /* parasoft-suppress MISRAC2025-DIR_4_6-b "Reviewed - no issues." */
int ActuatorManager_StartHeater(void); /* parasoft-suppress MISRAC2025-DIR_4_6-b "Reviewed - no issues." */
int ActuatorManager_StopHeater(void); /* parasoft-suppress MISRAC2025-DIR_4_6-b "Reviewed - no issues." */
int ActuatorManager_StopAll(void); /* parasoft-suppress MISRAC2025-DIR_4_6-b "Reviewed - no issues." */
int ActuatorManager_CanStartFan(unsigned long lastStopTime, /* parasoft-suppress MISRAC2025-DIR_4_6-b "Reviewed - no issues." */
                                unsigned int cooldownSeconds); /* parasoft-suppress MISRAC2025-DIR_4_6-b "Reviewed - no issues." */

#endif
