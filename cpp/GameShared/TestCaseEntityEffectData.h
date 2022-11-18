// Object: TestCaseEntityEffectData
// ClassId: 3572
// RuntimeId: 6700
// TypeInfo: 0x0000000144E8FBE0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace GameShared {
    class TestCaseEntityEffectData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString FileName; // 0x28
        Uint32 NumSimulationStep; // 0x30
        Boolean FilePathIsFromDataRoot; // 0x34
        Boolean AutoTestScreenShotMode; // 0x35
        char pad_0x36[0x2];
    }; // 0x38
    static_assert(sizeof(TestCaseEntityEffectData) == 0x38);
}
#pragma pack(pop)