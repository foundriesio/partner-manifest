# This is a FoundriesFactory Partner bblayers include file
# Meta-partner-toradex is a FoundriesFactory partner layer
# Do not remove unless you really know what you are doing.
BASELAYERS += "${OEROOT}/layers/meta-partner-toradex"

BSPLAYERS += " \
    ${OEROOT}/layers/meta-toradex-bsp-common \
    ${OEROOT}/layers/meta-toradex-nxp \
"
