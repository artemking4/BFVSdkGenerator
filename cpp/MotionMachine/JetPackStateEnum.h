// Object: JetPackStateEnum
// RuntimeId: 30070
// TypeInfo: 0x0000000144EECD00

namespace MotionMachine {
    enum JetPackStateEnum {
        JetPackStateEnum_Inactive = 0,
        JetPackStateEnum_InitialThrust = 1,
        JetPackStateEnum_Glide = 2,
        JetPackStateEnum_Decelerate = 3,
        JetPackStateEnum_Landing = 4,
        JetPackStateEnum_Pushed = 5,
        JetPackStateEnum_Finished = 6,
        JetPackStateEnum_Count = 7
    };
}