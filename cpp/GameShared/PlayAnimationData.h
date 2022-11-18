// Object: PlayAnimationData
// ClassId: 4426
// RuntimeId: 10844
// TypeInfo: 0x0000000144E6DA50
#include "../Core/DataContainer.h"
#include "../Ant/AntRef.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class PlayAnimationData : public Core::DataContainer {
        Ant::AntRef Controller; // 0x18
        Boolean Looping; // 0x2C
        char pad_0x2D[0x3];
    }; // 0x30
    static_assert(sizeof(PlayAnimationData) == 0x30);
}
#pragma pack(pop)