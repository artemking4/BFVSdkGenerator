// Object: BFUIGetFrontlineCapturePointsEntityData
// ClassId: 2225
// RuntimeId: 37839
// TypeInfo: 0x0000000144D2FEA0
#include "../Entity/EntityData.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetFrontlineCapturePointsEntityData : public Entity::EntityData {
        Int32 LocatorCount; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(BFUIGetFrontlineCapturePointsEntityData) == 0x28);
}
#pragma pack(pop)