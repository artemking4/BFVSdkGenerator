// Object: MovementActionGroupData
// ClassId: 4314
// RuntimeId: 18770
// TypeInfo: 0x0000000144E8F7E0
#include "../GameShared/MovementActionData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class MovementActionGroupData : public GameShared::MovementActionData {
        Array<GameShared::MovementActionData> Actions; // 0x18
        Boolean RunSimultaneously; // 0x20
        Boolean RestartChildren; // 0x21
        char pad_0x22[0x6];
    }; // 0x28
    static_assert(sizeof(MovementActionGroupData) == 0x28);
}
#pragma pack(pop)