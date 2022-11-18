// Object: TestCaseEntityData
// ClassId: 3571
// RuntimeId: 9761
// TypeInfo: 0x0000000144E8FD60
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace GameShared {
    class TestCaseEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 TimeOut; // 0x24
        CString TestGroup; // 0x28
        CString Description; // 0x30
        CString TestCaseName; // 0x38
        CString TestAuthorName; // 0x40
        Float32 CleanupTimeout; // 0x48
        Boolean Enabled; // 0x4C
        Boolean Stable; // 0x4D
        char pad_0x4E[0x2];
    }; // 0x50
    static_assert(sizeof(TestCaseEntityData) == 0x50);
}
#pragma pack(pop)