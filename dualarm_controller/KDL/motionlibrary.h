//
// Created by Junho Park on 2021/04/25.
//

#ifndef RTCONTROLDUALARM_MOTIONLIBRARY_H
#define RTCONTROLDUALARM_MOTIONLIBRARY_H

#define MOVE_ZERO 0x01
#define MOVE_JOB 0x02
#define MOVE_CUSTOMIZE1 0x03
#define MOVE_CUSTOMIZE2 0x04
#define MOVE_CUSTOMIZE3 0x05
#define MOVE_JOINT_CYCLIC 0x06
#define MOVE_CUSTOMIZE 0x07

#define TARGET_MOVING 0x10
#define TARGET_ACHIEVED 0x50
#define TARGET_ZERO 0x20
#define TARGET_JOB 0x30
#define TARGET_CUSTOMIZE 0x40

#define SYSTEM_BEGIN 0xff

#define CTRLMODE_IDY_JOINT 0x01
#define CTRLMODE_IMPEDANCE_JOINT 0x02
#define CTRLMODE_CLIK 0x03
#define CTRLMODE_TASK 0x04
#define CTRLMODE_IMPEDANCE_TASK 0x05

#define CTRLMODE_FRICTIONID 0x10

#define MOVE_TASK_CUSTOM 0x01
#define MOVE_TASK_CUSTOM1 0x02
#define MOVE_TASK_CUSTOM2 0x03
#define MOVE_TASK_CUSTOM3 0x04
#define MOVE_TASK_CUSTOM4 0x05
#define MOVE_TASK_CUSTOM5 0x06
#define MOVE_TASK_CUSTOM6 0x07

#endif //RTCONTROLDUALARM_MOTIONLIBRARY_H
