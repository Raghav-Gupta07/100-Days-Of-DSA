start_date="2025-02-06"
i=1

for file in $(ls day*.c | sort -V | head -n 60); do
  current_date=$(date -I -d "$start_date + $((i-1)) days")
  
  git add "$file"
  
  GIT_AUTHOR_DATE="$current_date 12:00:00" \
  GIT_COMMITTER_DATE="$current_date 12:00:00" \
  git commit -m "Added $file on $current_date"
  
  ((i++))
done