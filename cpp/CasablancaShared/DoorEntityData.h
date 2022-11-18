// Object: DoorEntityData
// ClassId: 2667
// RuntimeId: 53534
// TypeInfo: 0x0000000144D01220
#include "../Entity/EntityData.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/LockState.h"
#include "../CasablancaShared/DoorState.h"
#include "../Global/Float32.h"
#include "../UIIncubatorShared/PropertyInterpolationType.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class DoorEntityData : public Entity::EntityData {
        Int32 InitialState; // 0x20
        CasablancaShared::LockState LockState; // 0x24
        CasablancaShared::DoorState OnUnlockedState; // 0x28
        Float32 OpenInAngle; // 0x2C
        Float32 OpenOutAngle; // 0x30
        Float32 OpenTime; // 0x34
        Float32 CloseTime; // 0x38
        UIIncubatorShared::PropertyInterpolationType EaseInOpen; // 0x3C
        UIIncubatorShared::PropertyInterpolationType EaseOutOpen; // 0x40
        UIIncubatorShared::PropertyInterpolationType EaseInClose; // 0x44
        UIIncubatorShared::PropertyInterpolationType EaseOutClose; // 0x48
        Float32 OpenTimeBreach; // 0x4C
        UIIncubatorShared::PropertyInterpolationType EaseInBreach; // 0x50
        UIIncubatorShared::PropertyInterpolationType EaseOutBreach; // 0x54
        Boolean EnableCollisionInteraction; // 0x58
        Boolean InvertOpen; // 0x59
        char pad_0x5A[0x6];
    }; // 0x60
    static_assert(sizeof(DoorEntityData) == 0x60);
}
#pragma pack(pop)