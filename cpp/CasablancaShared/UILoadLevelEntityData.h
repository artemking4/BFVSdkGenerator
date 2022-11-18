// Object: UILoadLevelEntityData
// ClassId: 3727
// RuntimeId: 21283
// TypeInfo: 0x0000000144D1FE70
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UILoadLevelEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString LevelToLoad; // 0x28
        Int32 Difficulty; // 0x30
        char pad_0x34[0x4];
        CString SpGameMode; // 0x38
        Boolean ResumeFromCheckPoint; // 0x40
        char pad_0x41[0x7];
    }; // 0x48
    static_assert(sizeof(UILoadLevelEntityData) == 0x48);
}
#pragma pack(pop)