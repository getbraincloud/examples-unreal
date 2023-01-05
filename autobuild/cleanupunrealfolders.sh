for D in ./*; do
    if [ -d "$D" ]; then
        cd "$D"
        cleanupunreal.sh
        cd ..
    fi
done
