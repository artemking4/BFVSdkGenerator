// Object: PersistenceStatAxiomTemplates
// ClassId: 834
// RuntimeId: 31458
// TypeInfo: 0x0000000144DA2B00
#include "../Entity/TreeBase.h"
#include "../CasablancaShared/PersistenceStatAxiomTemplatesTreeNodeBase.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PersistenceStatAxiomTemplates : public Entity::TreeBase {
        Array<CasablancaShared::PersistenceStatAxiomTemplatesTreeNodeBase> Nodes; // 0x20
    }; // 0x28
    static_assert(sizeof(PersistenceStatAxiomTemplates) == 0x28);
}
#pragma pack(pop)