// Object: NuiSpeechSetupEntityData
// ClassId: 2906
// RuntimeId: 14212
// TypeInfo: 0x0000000144D28B20
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/NuiSpeechLevelConfiguration.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class NuiSpeechSetupEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::NuiSpeechLevelConfiguration Configuration; // 0x28
        Boolean ForceDialectSetting; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(NuiSpeechSetupEntityData) == 0x38);
}
#pragma pack(pop)