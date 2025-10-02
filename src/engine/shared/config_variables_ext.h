// This file can be included several times.

#ifndef MACRO_CONFIG_INT
#error "The config macros must be defined"
#define MACRO_CONFIG_INT(Tcme, ScriptName, Def, Min, Max, Save, Desc) ;
#define MACRO_CONFIG_COL(Tcme, ScriptName, Def, Save, Desc) ;
#define MACRO_CONFIG_STR(Tcme, ScriptName, Len, Def, Save, Desc) ;
#endif

MACRO_CONFIG_INT(EXTCopyCursor, ext_copy_cursor, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Copy the cursor when switching dummies. (0 - off, 1 - on)")
MACRO_CONFIG_INT(EXTCopyMovement, ext_copy_movement, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Copy movement state when switching dummies. (0 - off, 1 - on)")
MACRO_CONFIG_INT(EXTFixDummyHammer, ext_fix_dummy_hammer, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Fix the issue where the dummy performs a hammer attack when switching dummies with dummycopymoves enabled. (0 - off, 1 - on)")
