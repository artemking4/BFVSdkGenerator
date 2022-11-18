// Object: EAClothUpdater
// ClassId: 8369
// RuntimeId: 22847
// TypeInfo: 0x0000000144DFA650
#include "../Physics/IglooSubsystem.h"

#pragma pack(push, 8)
namespace EACloth {
    class EAClothUpdater : public Physics::IglooSubsystem {
        char pad_0x18[0x28];
    }; // 0x40
    static_assert(sizeof(EAClothUpdater) == 0x40);
}
#pragma pack(pop)