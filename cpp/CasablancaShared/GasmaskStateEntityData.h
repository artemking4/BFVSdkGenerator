// Object: GasmaskStateEntityData
// ClassId: 2784
// RuntimeId: 56450
// TypeInfo: 0x0000000144D2AFA0
#include "../Entity/EntityData.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class GasmaskStateEntityData : public Entity::EntityData {
        Int32 InputAction; // 0x20
        Float32 InputDelay; // 0x24
        Boolean Enabled; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(GasmaskStateEntityData) == 0x30);
}
#pragma pack(pop)