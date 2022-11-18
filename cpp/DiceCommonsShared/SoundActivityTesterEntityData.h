// Object: SoundActivityTesterEntityData
// ClassId: 3226
// RuntimeId: 35277
// TypeInfo: 0x0000000144DB3130
#include "../Entity/EntityData.h"
#include "../Global/CString.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Core/Asset.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class SoundActivityTesterEntityData : public Entity::EntityData {
        CString TestCaseName; // 0x20
        Float32 TimeOut; // 0x28
        char pad_0x2C[0x4];
        Array<Core::Asset> AssetsToTrack; // 0x30
        Boolean AutoSuccess; // 0x38
        Boolean AutoStart; // 0x39
        Boolean DetectAtLeastOneAsset; // 0x3A
        char pad_0x3B[0x5];
    }; // 0x40
    static_assert(sizeof(SoundActivityTesterEntityData) == 0x40);
}
#pragma pack(pop)